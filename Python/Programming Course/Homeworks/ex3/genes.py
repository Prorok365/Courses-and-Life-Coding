"""
 Program: genes.py
 Description: Checking the correct gene in a text and translate 
              it to chars from the table of amino proteins
"""


'''Dictionary of all amino proteins from table in hm3'''
codon_translator = {'GCA':'A','GCC':'A','GCG':'A','GCT':'A','TGC':'C','TGT':'C',
                    'GAC':'D','GAT':'D','GAA':'E','GAG':'E','TTC':'F','TTT':'F',
                    'GGA':'G','GGC':'G','GGG':'G','GGT':'G','CAC':'H','CAT':'H',
                    'ATA':'I','ATC':'I','ATT':'I','AAA':'K','AAG':'K','CTA':'L',
                    'CTC':'L','CTG':'L','CTT':'L','TTA':'L','TTG':'L','ATG':'M',
                    'AAC':'N','AAT':'N','CCA':'P','CCC':'P','CCT':'P','CCG':'P',
                    'CAA':'Q','CAG':'Q','AGA':'R','AGG':'R','CGA':'R','CGC':'R',
                    'CGG':'R','CGT':'R','AGC':'S','AGT':'S','TCA':'S','TCC':'S',
                    'TCG':'S','TCT':'S','ACA':'T','ACC':'T','ACG':'T','ACT':'T',
                    'GTA':'V','GTC':'V','GTG':'V','GTT':'V','TGG':'W','TAC':'Y',
                    'TAT':'Y'}

def is_legal_gene(gene_line):
    '''Check if the current gene line is correct'''

    for c in gene_line:
        '''Check every chararcter on correction'''
        if c != 'A' and c != 'C' and c != 'G' and c != 'T':
            return False

    for i in range(3, len(gene_line), 3):
        '''Check if start codon appeared more than one time'''
        if gene_line[i :(i + 3)] == 'ATG':
            return False

    for i in range(0, len(gene_line)-3, 3):
        '''Check if stop codon appeared more than one time'''
        if gene_line[i: i + 3: 3] == 'TAA' or 'TAG' or 'TGA':
            return False
    
    #If length of gene is not construct with 3 char in all gene 
    if (len(gene_line) % 3 != 0):
        return False
    
    #If start codon not in the start
    elif gene_line[: 3] != ('ATG'):
        return False

    #If stop codon not in the end
    elif gene_line[len(gene_line) - 3:] != 'TAG' or 'TAA' or 'TGA':
        return False
    
    #Return True if no one of the conditions dont work
    else:
        return True
    
def gene_read(txt):
    '''Read the file of genes'''

    genes_file = open(txt, 'r').read()

    genes_file = genes_file.split()

    return genes_file

def legal_genes(genes):
    '''Create list of translated codons in list of strings'''
    legal_genes = []        #Empty list

    for gen in genes:
        '''Checking the correct gene, write "illegal gen" or translate it'''

        if is_legal_gene(gen) is False:         #Checking the correct gene, if not,
            legal_genes.append("illegal gen")   #Add on the line that is 'illigal gen'
        
        else:                                   #If gen is correct
            legal_gene = ''                     #Create empty string

            for i in range(0, len(gen) - 3, 3): 
                '''Translate gene line into characters while using dictionary'''

                codon = gen[i: i + 3]           #Take every codon in the dictionary

                legal_gene += (codon_translator[codon]) #add the translation in string
            
            legal_genes.append(legal_gene)      #Add the string into list

    return legal_genes      #return the list of all translated strings

def main():

    proteins_file = open("proteins.txt", 'w')

    for line in legal_genes(gene_read('genes.txt')):

        proteins_file.write(line)

        proteins_file.write('\n')       

    proteins_file.close


if __name__ == "__main__":
    pass